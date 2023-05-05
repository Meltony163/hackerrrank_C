
int  sum (int count,...) {
va_list x;
int s=0;
va_start(x, count);
for (int i=0; i<count; i++) {
s+=va_arg(x, int);
}
va_end(x);
return s;
}

int min(int count,...) {
va_list x;
int m=MAX_ELEMENT,temb;
va_start(x, count);
for (int i=0; i<count; i++) {
    temb=va_arg(x, int);
if (temb<m) {
m=temb;
}
}
va_end(x);
return m;
}

int max(int count,...) {
va_list x;
int m=MIN_ELEMENT,temb;
va_start(x, count);
for (int i=0; i<count; i++) {
    temb=va_arg(x, int);
if (temb>m) {
m=temb;
}
}
va_end(x);
return m;
}
