//
// Created by chudonghao on 17-10-31.
//



#include <cstdio>
#include <iostream>
#include <boost/program_options.hpp>

#include "libs.h"
#include "plugins_manager.h"
#include "common.h"

using namespace std;
namespace po = boost::program_options;
using namespace cck;

int main(int argc, char **argv) {
    // Declare the supported options.
    po::options_description od("Allowed options");
    od.add_options()
            ("help,h", "produce help message")
            ("file,f", po::value<vector<string> >(), "input files");
    po::positional_options_description pod;
    pod.add("file", -1);

    po::variables_map vm;
    po::store(po::command_line_parser(argc, argv).options(od).positional(pod).run(), vm);
    po::notify(vm);

    if (vm.count("help")) {
        cout << od << "\n";
        return 0;
    }

    if (vm.count("file")) {
        auto files = vm["file"].as<vector<string> >();
        for (auto &&file: files) {
            LOG_N << file << " " << filesystem::is_regular_file(file);
        }
    }
//test
    plugins_manager_t plugins_manager;
    plugins_manager.get_plugin("test");


    return 0;
}