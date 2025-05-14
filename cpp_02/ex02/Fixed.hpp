#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &other);
		Fixed(int const n);
		~Fixed(void);
		Fixed &operator=(Fixed const &other);
		int		getRowBits(void) const;
		void	setRowBits(int const row);
		float	toFloat(void) const;
		int		toInt(void) const;


	private:
		int	_value;
		static	const int _fract;
};

#endif
