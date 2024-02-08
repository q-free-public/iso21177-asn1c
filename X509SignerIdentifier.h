/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "SequenceOfX509Certificate.h"
#include <constr_CHOICE.h>
#ifndef	_X509SignerIdentifier_H_
#define	_X509SignerIdentifier_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X509SignerIdentifier_PR {
	X509SignerIdentifier_PR_NOTHING,	/* No components present */
	X509SignerIdentifier_PR_certificate
	/* Extensions may appear below */
	
} X509SignerIdentifier_PR;

/* X509SignerIdentifier */
typedef struct X509SignerIdentifier {
	X509SignerIdentifier_PR present;
	union X509SignerIdentifier_u {
		SequenceOfX509Certificate_t	 certificate;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X509SignerIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X509SignerIdentifier;
extern asn_CHOICE_specifics_t asn_SPC_X509SignerIdentifier_specs_1;
extern asn_TYPE_member_t asn_MBR_X509SignerIdentifier_1[1];
extern asn_per_constraints_t asn_PER_type_X509SignerIdentifier_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X509SignerIdentifier_H_ */
#include <asn_internal.h>
