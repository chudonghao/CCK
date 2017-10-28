//
// Created by chudonghao on 17-10-31.
//

#ifndef CCK_PLUGINS_IMPORTER_H
#define CCK_PLUGINS_IMPORTER_H

#include <string>
#include "libs.h"
#include "plugin_base.h"

namespace cck{
    class plugins_manager_t {
    public:
        plugins_manager_t();
        cck::plugin_interface_t* get_plugin(std::string keyworld_name);
    private:
        filesystem::path plugins_dir;
    };


}



#endif //CCK_PLUGINS_IMPORTER_H
