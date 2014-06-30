/*
 * UID.h
 *
 *  Created on: Dec 19, 2013
 *      Author: tastyger
 */

#ifndef UID_H_
#define UID_H_

typedef uint8_t UID_Id[10]; /* 80 bit ID */

/*!
 * \brief Return the 80bit UID of the device
 * \param id Pointer to the buffer where to store the UID
 * \return Error code, ERR_OK if everything is ok.
 */
uint8_t UID_GetID(UID_Id id);


#endif /* UID_H_ */
