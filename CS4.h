/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_14816/AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "CountryCode.h"
#include "AlphabetIndicator.h"
#include "LicPlateNumber.h"
#include <constr_SEQUENCE.h>
#ifndef	_CS4_H_
#define	_CS4_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CS4 */
typedef struct CS4 {
	CountryCode_t	 countryCode;
	AlphabetIndicator_t	 alphabetIndicator;
	LicPlateNumber_t	 licPlateNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS4;

#ifdef __cplusplus
}
#endif

#endif	/* _CS4_H_ */
#include <asn_internal.h>
