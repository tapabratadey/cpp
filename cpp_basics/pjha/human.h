#ifndef HUMAN_H_
#define HUMAN_H_

#include <string>

namespace pjha {

class Human {
  std::string first_name_;
  std::string last_name_;

 public:
  virtual std::string occupation() {
    return "None";
  }

  inline std::string first_name()
    { return first_name_; }
  inline std::string last_name()
    { return last_name_; }
};

} // namespace pjha

#endif // HUMAN_H_