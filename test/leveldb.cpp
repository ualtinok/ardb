/*
 * leveldb.cpp
 *
 *  Created on: 2013-3-27
 *      Author: wqy
 */

#include "ardb.hpp"
#include "engine/leveldb_engine.hpp"
#include <string>
#include <iostream>
#include <glog/logging.h>
#include "test_case.cpp"

using namespace ardb;

int main(int argc, char** argv)
{
	google::InitGoogleLogging(argv[0]);
	Properties cfg;
	cfg["dir"] = "/tmp/ardb/test";
	LevelDBEngineFactory factory(cfg);
	Ardb db(&factory);
	test_all(db);
	return 0;
}
