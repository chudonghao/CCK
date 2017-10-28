//
// Created by chudonghao on 17-10-31.
//

#ifndef CCK_PLUGINS_BASE_H
#define CCK_PLUGINS_BASE_H

#include <string>
#include "keyworld_context.h"

namespace cck{

    class plugin_interface_t{
    public:
        virtual ~plugin_interface_t(){};
        virtual const std::string& name() = 0;
        virtual void run(keyword_context_t&) = 0;
    };
}

#endif //CCK_PLUGINS_BASE_H
