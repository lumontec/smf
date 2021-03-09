#ifndef _HOME_CRASH_DOCUMENTS_LOCAL_OSRC_SMF_BUILD_RELEASE_______SRC_INTEGRATION_TESTS_NON_ROOT_PORT_H
#define _HOME_CRASH_DOCUMENTS_LOCAL_OSRC_SMF_BUILD_RELEASE_______SRC_INTEGRATION_TESTS_NON_ROOT_PORT_H

// Copyright (c) 2017 Alexander Gallego. All rights reserved.
//
#pragma once
namespace smf {
inline uint16_t
non_root_port(uint16_t port) {
  if (port < 1024) return port + 1024;
  return port;
}
}  // namespace smf

#endif
