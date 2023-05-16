#include <stdio.h>
#include "doctest.h"
#include <stdexcept>
#include "iostream"

#include "sources/Team.hpp"

using namespace std;
namespace ariel
{

    TEST_CASE("Testing Team functions")
    {
        Cowboy *tom = new Cowboy("Tom", Point(0, 0));
        Cowboy *eli = new Cowboy("Eli", Point(0, 0));
        Cowboy *moshe = new Cowboy("Moshe", Point(0, 0));
        Team team(tom);

        CHECK_EQ(team.stillAlive(), 1);

        team.add(eli);
        team.add(moshe);
        CHECK_EQ(team.stillAlive(), 3);
    }

    TEST_CASE("Testing attack function")
    {
        OldNinja *tom = new OldNinja("Tom", Point(0, 0));
        YoungNinja *eli = new YoungNinja("Eli", Point(0, 0));
        TrainedNinja *moshe = new TrainedNinja("Moshe", Point(0, 0));
        Team teamA(tom);

        OldNinja *aviv = new OldNinja("Aviv", Point(0, 0));
        YoungNinja *shahar = new YoungNinja("Shahar", Point(0, 0));
        TrainedNinja *shon = new TrainedNinja("Shon", Point(0, 0));
        Team teamB(aviv);

        teamA.attack(&teamB);
        CHECK_EQ(teamA.stillAlive(), 3);
        CHECK(teamB.stillAlive() <= 3);
        CHECK_THROWS(teamA.attack(&teamA));
    }

    TEST_CASE("Testing attacking an empty team")
    {
        OldNinja *tom = new OldNinja("Tom", Point(0, 0));
        YoungNinja *eli = new YoungNinja("Eli", Point(0, 0));
        TrainedNinja *moshe = new TrainedNinja("Moshe", Point(0, 0));
        Team teamA(tom);
        Team teamB(nullptr);

        CHECK_THROWS(teamA.attack(&teamB));
    }

    TEST_CASE("Testing Cowboy functions")
    {
        Cowboy *tom = new Cowboy("Tom", Point(0, 0));
        Cowboy *eli = new Cowboy("Eli", Point(0, 0));
        for (int i = 0; i < 6; i++)
        {
            tom->shoot(eli);
        }

        CHECK(tom->hasboolets() == false);
    }

    TEST_CASE("Testing Ninja functions")
    {
        YoungNinja *tom = new YoungNinja("Tom", Point(0, 0));
        YoungNinja *eli = new YoungNinja("Eli", Point(0, 0));
        TrainedNinja *moshe = new TrainedNinja("Moshe", Point(0, 0));
        CHECK_EQ(tom->distance(*eli), 0);
        CHECK_EQ(eli->distance(*moshe), 0);
    }

    TEST_CASE("Testing game demo")
    {
        Cowboy *tom = new Cowboy("Tom", Point(0, 0));
        Cowboy *eli = new Cowboy("Eli", Point(0, 0));
        Team teamA(tom);

        OldNinja *shahar = new OldNinja("Shahar", Point(0, 0));
        YoungNinja *tomer = new YoungNinja("Tomer", Point(0, 0));
        TrainedNinja *ori = new TrainedNinja("Ori", Point(0, 0));
        Team teamB(shahar);

        CHECK_NOTHROW(shahar->move(tom));
        CHECK_NOTHROW(tomer->move(tom));
        CHECK_NOTHROW(tom->shoot(shahar));
        CHECK_NOTHROW(ori->slash(tom));
        CHECK(shahar->isAlive() == false);

        SUBCASE("Act after the player already died")
        {
            CHECK_THROWS(shahar->slash(tomer));
            CHECK_THROWS(shahar->move(tom));
        }
    }

    TEST_CASE("Testing fight againts your own team player or againts itself")
    {
        Cowboy *eli = new Cowboy("Eli", Point(0, 0));
        OldNinja *shahar = new OldNinja("Shahar", Point(0, 0));
        YoungNinja *tomer = new YoungNinja("Tomer", Point(0, 0));
        TrainedNinja *ori = new TrainedNinja("Ori", Point(0, 0));
        Team teamB(shahar);

        CHECK_THROWS(eli->shoot(eli));
        CHECK_THROWS(tomer->slash(tomer));
        CHECK_THROWS(shahar->slash(tomer));
        CHECK_THROWS(shahar->move(ori));
    }
}
