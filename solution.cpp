#include <cstring>
#include <iostream>

using namespace std;

char *trim(char *destination, const char *source) {
  char *dest = destination;
  
  while (*source == ' ' || *source == '\n' || *source == '\t') {
    source++;
  }

  const char *post = source;
  post++;
  
  while (*source != '\0') {
    if (*source != ' ' && *source != '\n' && *source != '\t') {
      *dest = *source;
      source++;
      dest++;
      post++;
    } else if (*source == ' ' && isalpha(*post)) {
      *dest = *source;
      source++;
      dest++;
      post++;
    } else {
      source++;
      post++;
    }
  }
  *dest = '\0';
  return destination;
}