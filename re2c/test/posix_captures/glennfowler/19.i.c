/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt4 = yyt5 = NULL;
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy4;
	default:
		yyt4 = yyt5 = NULL;
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 3;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt1;
		yypmatch[2] = yyt2;
		yypmatch[3] = yyt3;
		yypmatch[4] = yyt5;
		yypmatch[5] = yyt4;
		yypmatch[1] = YYCURSOR;
		{}
	}
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = yyt5 = YYCURSOR;
		goto yy5;
	case 'b':
		yyt4 = NULL;
		yyt3 = YYCURSOR;
		goto yy7;
	default:
		yyt4 = yyt5 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	yyt4 = yyt5 = NULL;
	yyt2 = yyt3 = YYCURSOR;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt3 = yyt4 = YYCURSOR;
		goto yy4;
	default:
		yyt2 = yyt3;
		yyt5 = yyt4;
		goto yy2;
	}
yy8:
	yych = *++YYCURSOR;
	yyt2 = yyt3;
	yyt3 = yyt4 = YYCURSOR;
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy2;
	}
}

re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 6: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]