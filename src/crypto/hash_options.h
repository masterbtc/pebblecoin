// Copyright (c) 2014 The Pebblecoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "crypto.h"

#include "common/command_line.h"

namespace hashing_opt
{
  extern const command_line::arg_descriptor<bool>        arg_disable_signed_hashes;
  extern const command_line::arg_descriptor<bool>        arg_enable_boulderhash;
  extern const command_line::arg_descriptor<std::string> arg_hash_signing_priv_key;
  extern const command_line::arg_descriptor<uint32_t>    arg_worker_threads;
  extern const command_line::arg_descriptor<uint32_t>    arg_states_per_thread;

  extern bool _use_signed_hashes;
  extern bool _do_boulderhash;
  inline bool using_signed_hashes()
  {
    return _use_signed_hashes;
  }
  inline bool boulderhash_enabled()
  {
    return _do_boulderhash;
  }
}

namespace crypto {
  void init_options(boost::program_options::options_description& desc);
  bool process_options(boost::program_options::variables_map& vm);
}
