#include<stdio.h>
#include"head2.h"



void escape(char * s, char * t) {
    int i, j;
    i = j = 0;

    while ( t[i] ) {

        /*  Translate the special character, if we have one  */

        switch( t[i] ) {
        case '\n':
            s[j++] = '\\';
            s[j] = 'n';
            break;

        case '\t':
            s[j++] = '\\';
            s[j] = 't';
            break;

        case '\a':
            s[j++] = '\\';
            s[j] = 'a';
            break;

        case '\b':
            s[j++] = '\\';
            s[j] = 'b';
            break;

        case '\f':
            s[j++] = '\\';
            s[j] = 'f';
            break;

        case '\r':
            s[j++] = '\\';
            s[j] = 'r';
            break;

        case '\v':
            s[j++] = '\\';
            s[j] = 'v';
            break;

        case '\\':
            s[j++] = '\\';
            s[j] = '\\';
            break;

        case '\"':
            s[j++] = '\\';
            s[j] = '\"';
            break;

        default:

            /*  This is not a special character, so just copy it  */

            s[j] = t[i];
            break;
        }
        ++i;
        ++j;
    }
    s[j] = t[i];    /*  Don't forget the null character  */
}


/*  Copies string t to string s, converting escape sequences
    into their appropriate special characters. See the comment
    for escape() for remarks regarding which escape sequences
    are translated.                                             */

void unescape(char * s, char * t) {
    int i, j;
    i = j = 0;

    while ( t[i] ) {
        switch ( t[i] ) {
        case '\\':

            /*  We've found an escape sequence, so translate it  */

            switch( t[++i] ) {
            case 'n':
                s[j] = '\n';
                break;

            case 't':
                s[j] = '\t';
                break;

            case 'a':
                s[j] = '\a';
                break;

            case 'b':
                s[j] = '\b';
                break;

            case 'f':
                s[j] = '\f';
                break;

            case 'r':
                s[j] = '\r';
                break;

            case 'v':
                s[j] = '\v';
                break;

            case '\\':
                s[j] = '\\';
                break;

            case '\"':
                s[j] = '\"';
                break;

            default:

                /*  We don't translate this escape
                    sequence, so just copy it verbatim  */

                s[j++] = '\\';
                s[j] = t[i];
            }
            break;

        default:

            /*  Not an escape sequence, so just copy the character  */

            s[j] = t[i];
        }
        ++i;
        ++j;
    }
    s[j] = t[i];    /*  Don't forget the null character  */
}
