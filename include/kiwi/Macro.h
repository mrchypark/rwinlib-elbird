﻿#pragma once

#define KIWI_STR_HELPER(x) #x
#define KIWI_STR(x) KIWI_STR_HELPER(x)

#define KIWI_VERSION_MAJOR 0
#define KIWI_VERSION_MINOR 13
#define KIWI_VERSION_PATCH 1

#define KIWI_VERSION_STRING KIWI_STR(KIWI_VERSION_MAJOR) "." KIWI_STR(KIWI_VERSION_MINOR) "." KIWI_STR(KIWI_VERSION_PATCH)
