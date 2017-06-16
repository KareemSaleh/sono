#ifndef ERROR_H
#define ERROR_H

enum SonoCode {
  OK = 0,
  SDL_ERROR = 1,
  FILE_ERROR,
};

std::string logTime() {
  time_t now;
  struct tm *current;

  now = time(0);
  current = localtime(&now);

  return std::to_string(current->tm_hour) + ":" + std::to_string(current->tm_min) + ":" +
         std::to_string(current->tm_sec);
}

/*
 * Log an SDL INFO message with timestamp
 * @param os The output stream to write the message too
 * @param msg The error message to write, format will be msg error: SDL_GetError()
 */
void logSDLInfo(std::ostream &os, const std::string &msg){
	os << "[" << logTime() << "]" << " [INFO] " << msg << std::endl;
}

/*
 * Log an SDL error with some error message to the output stream of our choice
 * @param os The output stream to write the message too
 * @param msg The error message to write, format will be msg error: SDL_GetError()
 */
void logSDLError(std::ostream &os, const std::string &msg){
	os << msg << " [ERROR] " << SDL_GetError() << std::endl;
}

#endif
