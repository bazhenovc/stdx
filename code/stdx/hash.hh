
#pragma once

#if (defined(_HAS_EXCEPTIONS) && _HAS_EXCEPTIONS == 0)
#define SPP_NO_CXX11_NOEXCEPT 1
#endif

#include "../../external/sparsepp/sparsepp.h"

namespace stdx
{

template <typename Value>
using hash = spp::spp_hash<Value>;

using spp::hash_combine;

}
