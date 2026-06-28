#pragma once

class Symbol {
public:
  explicit Symbol(const char name);
  ~Symbol();
private:
  const char n;
};