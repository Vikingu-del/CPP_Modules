/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:15:28 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/05 21:44:34 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Public members:
// ◦ A default constructor that initializes the fixed-point number value to 0.
// ◦ A copy constructor.
// ◦ A copy assignment operator overload.
// ◦ A destructor.
// ◦ A member function int getRawBits( void ) const;
// that returns the raw value of the fixed-point value.
// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the fixed-point number.

class Fixed {
    private:
        int _value;
        static const int _bit = 8;
    public:
        Fixed();
        Fixed( const Fixed &f );
        Fixed &operator=( const Fixed &f );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};