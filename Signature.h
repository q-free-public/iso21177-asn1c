/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "EcdsaP256Signature.h"
#include "EcdsaP384Signature.h"
#include <constr_CHOICE.h>
#ifndef	_Signature_H_
#define	_Signature_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Signature_PR {
	Signature_PR_NOTHING,	/* No components present */
	Signature_PR_ecdsaNistP256Signature,
	Signature_PR_ecdsaBrainpoolP256r1Signature,
	/* Extensions may appear below */
	Signature_PR_ecdsaBrainpoolP384r1Signature,
	Signature_PR_ecdsaNistP384Signature
} Signature_PR;

/* Signature */
typedef struct Signature {
	Signature_PR present;
	union Signature_u {
		EcdsaP256Signature_t	 ecdsaNistP256Signature;
		EcdsaP256Signature_t	 ecdsaBrainpoolP256r1Signature;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		EcdsaP384Signature_t	 ecdsaBrainpoolP384r1Signature;
		EcdsaP384Signature_t	 ecdsaNistP384Signature;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Signature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Signature;
extern asn_CHOICE_specifics_t asn_SPC_Signature_specs_1;
extern asn_TYPE_member_t asn_MBR_Signature_1[4];
extern asn_per_constraints_t asn_PER_type_Signature_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Signature_H_ */
#include <asn_internal.h>