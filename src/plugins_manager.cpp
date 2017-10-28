//
// Created by chudonghao on 17-10-31.
//

#include <iostream>
#include <boost/dll.hpp>
#include <boost/log/trivial.hpp>


#include "plugins_manager.h"
#include "common.h"

using namespace cck;
using namespace std;
namespace cck{


    plugins_manager_t::plugins_manager_t() {
        plugins_dir = cck_data_dir() / "plugin";
    }

    cck::plugin_interface_t *plugins_manager_t::get_plugin(std::string keyworld_name) {
        LOG_N << plugins_dir / keyworld_name;

    }
}
