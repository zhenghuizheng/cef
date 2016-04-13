// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "debugger.h"

#include <stdlib.h>
#include <windows.h>

namespace base {
	namespace debug {

		bool BeingDebugged() {
			return ::IsDebuggerPresent() != 0;
		}

		void BreakDebugger() {
			if (IsDebugUISuppressed())
				_exit(1);
			__debugbreak();
#if defined(NDEBUG)
			_exit(1);
#endif
		}

	}  // namespace debug
}  // namespace base