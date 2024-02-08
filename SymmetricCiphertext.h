/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "AesCcmCiphertext.h"
#include <constr_CHOICE.h>
#ifndef	_SymmetricCiphertext_H_
#define	_SymmetricCiphertext_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SymmetricCiphertext_PR {
	SymmetricCiphertext_PR_NOTHING,	/* No components present */
	SymmetricCiphertext_PR_aes128ccm
	/* Extensions may appear below */
	
} SymmetricCiphertext_PR;

/* SymmetricCiphertext */
typedef struct SymmetricCiphertext {
	SymmetricCiphertext_PR present;
	union SymmetricCiphertext_u {
		AesCcmCiphertext_t	 aes128ccm;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SymmetricCiphertext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SymmetricCiphertext;
extern asn_CHOICE_specifics_t asn_SPC_SymmetricCiphertext_specs_1;
extern asn_TYPE_member_t asn_MBR_SymmetricCiphertext_1[1];
extern asn_per_constraints_t asn_PER_type_SymmetricCiphertext_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SymmetricCiphertext_H_ */
#include <asn_internal.h>
