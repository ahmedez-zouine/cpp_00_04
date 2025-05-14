#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
	private:
		int	_value;
		const int static _fract;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &copy);
		Fixed	&operator=(Fixed const &copy);
		int		getRawBits(void)const;
		void	setRawBits(int const row);

};
#endif
