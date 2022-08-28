// Box.cppm - defines Box class
export module box;

import <print>;

export class Box
{
public:
  // Constructors
  Box(double l, double w, double h) : m_length{l}, m_width{w}, m_height{h}
  { std::println("Box(double, double, double) called."); }

  explicit Box(double side) : Box{side, side, side} 
  { std::println("Box(double) called."); }

  Box() { std::println("Box() called."); }   // Default constructor

  // Copy constructor
  Box(const Box& b) : m_length{ b.m_length }, m_width{ b.m_width }, m_height{ b.m_height }
  { std::println("Box copy constructor"); }

  // Destructor
  ~Box() { std::println("Box destructor"); }

  double volume() const { return m_length * m_width * m_height; }

  // Accessors
  double getLength() const { return m_length; }
  double getWidth()  const { return m_width; }
  double getHeight() const { return m_height; }

protected:                   // Protected to facilitate further examples
  double m_length {1.0};     // later this chapter (should normally be private)
  double m_width {1.0};
  double m_height {1.0};
};
