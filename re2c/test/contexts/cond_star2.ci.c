/* Generated by re2c */

{
	YYCTYPE yych;
	YYDISTTYPE yyctx0, yyctx1, yyctx4, yyctx6;
	YYCTXMARKER = YYCURSOR;
	switch (YYGETCONDITION()) {
	case yycc1: goto yyc_c1;
	case yycc2: goto yyc_c2;
	}
/* *********************************** */
yyc_c1:
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	yyctx6 = (YYCURSOR - YYCTXMARKER);
	switch ((yych = *YYCURSOR)) {
	case 'b':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYCTXMARKER + yyctx6;
	{}
yy7:
	++YYCURSOR;
	yyctx0 = (YYCURSOR - YYCTXMARKER);
	switch ((yych = *YYCURSOR)) {
	case 'b':	goto yy9;
	case 'c':	goto yy11;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYCTXMARKER + yyctx0;
	{}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy6;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy11;
	default:	goto yy8;
	}
/* *********************************** */
yyc_c2:
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy17;
	default:	goto yy15;
	}
yy15:
	++YYCURSOR;
	yyctx1 = (YYCURSOR - YYCTXMARKER);
	yych = *YYCURSOR;
	goto yy20;
yy16:
	YYCURSOR = YYCTXMARKER + yyctx1;
	{}
yy17:
	yych = *(YYMARKER = ++YYCURSOR);
	yyctx1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy23;
	case 'c':	goto yy26;
	default:	goto yy18;
	}
yy18:
	YYCURSOR = YYCTXMARKER + yyctx1;
	{}
yy19:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy20:
	switch (yych) {
	case 'b':	goto yy19;
	default:	goto yy16;
	}
yy21:
	yych = *++YYCURSOR;
	yyctx4 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case 'b':	goto yy28;
	case 'c':	goto yy31;
	default:	goto yy22;
	}
yy22:
	YYCURSOR = YYMARKER;
	goto yy18;
yy23:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy23;
	default:	goto yy25;
	}
yy25:
	YYCURSOR = YYCTXMARKER + yyctx1;
	{}
yy26:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy26;
	default:	goto yy18;
	}
yy28:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy28;
	default:	goto yy30;
	}
yy30:
	YYCURSOR = YYCTXMARKER + yyctx4;
	{}
yy31:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy31;
	default:	goto yy33;
	}
yy33:
	YYCURSOR = YYCTXMARKER + yyctx4;
	{}
}

re2c: warning: line 11: unreachable rule in condition 'c2' (shadowed by rules at lines 5, 6) [-Wunreachable-rules]