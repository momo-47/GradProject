/*
 * BIT_MATH.h
 *
 * Created: 1/10/2021 11:10:19 AM
 *  Author: magam
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_



#define SET_BIT(REG, BIT) REG |= (1 << BIT)
#define CLR_BIT(REG, BIT) REG &= ~(1<<BIT)
#define GET_BIT(REG, BIT) ((REG>>BIT) & 1)
#define TGL_BIT(REG, BIT) REG ^= (1 << BIT)



#endif /* BIT_MATH_H_ */