#ifndef BABELTRADER_ERR_H_
#define BABELTRADER_ERR_H_

enum {
	BABELTRADER_OK = 0,
	BABELTRADER_ERR_BEGIN = 10000,
	BABELTRADER_ERR_HTTPREQ_TOO_LONG,		// 1
	BABELTRADER_ERR_HTTPREQ_FAILED_PARSE,	// 2
	BABELTRADER_ERR_WSREQ_FAILED_PARSE,		// 3
	BABELTRADER_ERR_WSREQ_NOT_HANDLE,		// 4
	BABELTRADER_ERR_WSREQ_FAILED_HANDLE,	// 5
	BABELTRADER_ERR_MAX,
};

extern const char* BABELTRADER_ERR_MSG[BABELTRADER_ERR_MAX - BABELTRADER_ERR_BEGIN];

#endif