
#pragma once

#include "hash.hh"

namespace stdx
{

template <typename Key, typename Value,
          typename Hash     = stdx::hash<Key>,
          typename Equal    = std::equal_to<Key>,
          typename Alloc    = spp::libc_allocator_with_realloc<std::pair<const Key, Value>>>
using hash_map = spp::sparse_hash_map<Key, Value, Hash, Equal, Alloc>;

}
