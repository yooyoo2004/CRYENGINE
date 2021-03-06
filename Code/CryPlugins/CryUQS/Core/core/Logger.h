// Copyright 2001-2016 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

// *INDENT-OFF* - <hard to read code and declarations due to inconsistent indentation>

namespace uqs
{
	namespace core
	{

		//===================================================================================
		//
		// CLoggerIndentation
		//
		//===================================================================================

		class CLoggerIndentation
		{
		public:
			explicit                   CLoggerIndentation();
			                           ~CLoggerIndentation();
			static int                 GetCurrentIndentLevel();

		private:
			                           UQS_NON_COPYABLE(CLoggerIndentation);

		private:
			static int                 s_indentLevel;
		};

		//===================================================================================
		//
		// CLogger
		//
		//===================================================================================

		class CLogger
		{
		public:
			void                       Printf(const char* fmt, ...) PRINTF_PARAMS(2, 3);
		};

	}
}
