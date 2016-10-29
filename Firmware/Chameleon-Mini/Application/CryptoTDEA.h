/*
 * CryptoDES.h
 *
 *  Created on: 18.10.2016
 *      Author: dev_zzo
 */

#ifndef CRYPTODES_H_
#define CRYPTODES_H_

#include <stdint.h>

/* Key sizes, in bytes */
#define CRYPTO_DES_KEY_SIZE         8 /* Bytes */
#define CRYPTO_2KTDEA_KEY_SIZE      (CRYPTO_DES_KEY_SIZE * 2)

#define CRYPTO_DES_BLOCK_SIZE       8 /* Bytes */

/** Performs the Triple DES sequence in the CBC mode on the buffer */
void CryptoEncrypt_2KTDEA_CBC_Send(uint16_t Count, const void* Plaintext, void* Ciphertext, void *IV, const uint8_t* Keys);
void CryptoEncrypt_2KTDEA_CBC_Receive(uint16_t Count, const void* Plaintext, void* Ciphertext, void *IV, const uint8_t* Keys);

#endif /* CRYPTODES_H_ */
