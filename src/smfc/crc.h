// Copyright 2021 SMF Authors
//

#ifndef _HOME_CRASH_DOCUMENTS_LOCAL_OSRC_SMF_SRC_SMFC_CRC_H
#define _HOME_CRASH_DOCUMENTS_LOCAL_OSRC_SMF_SRC_SMFC_CRC_H

// Copyright 2018 SMF Authors
//

#pragma once
#include <boost/crc.hpp>
namespace smf_gen {
inline uint32_t
crc32(const char *data, const size_t &length) {
  boost::crc_32_type result;
  result.process_bytes(data, length);
  return result.checksum();
}
}  // namespace smf_gen

#endif
