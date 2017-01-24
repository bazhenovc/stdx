
#pragma once

#include "hash.hh"

namespace stdx
{

template <typename Key,
          typename Hash     = stdx::hash<Key>,
          typename Equal    = std::equal_to<Key>,
          typename Alloc    = spp::libc_allocator_with_realloc<Key>>
using hash_set = spp::sparse_hash_set<Key, Hash, Equal, Alloc>;

}
