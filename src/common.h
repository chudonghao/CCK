//
// Created by chudonghao on 17-10-31.
//

#ifndef CCK_COMMON_H
#define CCK_COMMON_H

#include "libs.h"

namespace cck{
    enum severity_level
    {
        normal,
        notification,
        warning,
        error,
        critical
    };
    extern logging::sources::severity_logger< severity_level > severity_logger;

    const filesystem::path& cck_data_dir();
}

#define LOG_W BOOST_LOG_FUNCTION();BOOST_LOG_SEV(cck::severity_logger,cck::warning)
#define LOG_N BOOST_LOG_FUNCTION();BOOST_LOG_SEV(cck::severity_logger,cck::normal)
#define LOG_E BOOST_LOG_FUNCTION();BOOST_LOG_SEV(cck::severity_logger,cck::error)

#endif //CCK_CCK_COMMON_H
