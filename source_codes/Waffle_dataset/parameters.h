#ifndef PARAMETERS_H
#define PARAMETERS_H

//const int MIN_OBJECT = 1000000; // initial insert MIN_OBJECT points, also used in minimum phase
//const int MAX_OBJECT = 10000000;
#include <string>

const int MIN_OBJECT = 100000;
const int MAX_OBJECT = 2000000;
const int RANDOM_INSERTION = 900000;
const int CENTER_INSERTION = 1000000;

const double range_size_percent_min = 0.5; // control query window size
const double range_size_percent_max = 1.5;
const uint64_t range_or_knn_frequency = 10; // insert or delete / query

const int precision = 10;
const int query_per_tick = 200000;
const int ticks_per_episode = 20;
const int k = 10;
const int random_move_trial = 10; // number of hops from one street to other streets

const bool output_objects_to_file = false; // If true, for each tick, the current objects are printed to a file.
const std::string path_to_objects_file = ""; // The path should be empty or end with '/'.

#endif