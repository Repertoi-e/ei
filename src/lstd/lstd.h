#pragma once

//
// We can't get away with just modules because we define certain 
// macros (e.g. defer, For ..) which we can't export. Use the header like this:
//
// import "lstd.h";
// 
// This imports lstd.basic (usual memory stuff, arrays, strings, formatting, etc.)
//
// for other modules in the library do the usual import:
//
// import lstd.atomic;
// import lstd.os;
// import lstd.path;
// import lstd.thread;
// import lstd.big_integer;
//

#include "lstd/common.h"

import lstd.basic;
