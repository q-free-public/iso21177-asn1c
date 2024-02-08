/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "Opaque.h"
#include "EncryptedData.h"
#include <constr_CHOICE.h>
#ifndef	_Ieee1609Dot2Content_H_
#define	_Ieee1609Dot2Content_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ieee1609Dot2Content_PR {
	Ieee1609Dot2Content_PR_NOTHING,	/* No components present */
	Ieee1609Dot2Content_PR_unsecuredData,
	Ieee1609Dot2Content_PR_signedData,
	Ieee1609Dot2Content_PR_encryptedData,
	Ieee1609Dot2Content_PR_signedCertificateRequest,
	/* Extensions may appear below */
	Ieee1609Dot2Content_PR_signedX509CertificateRequest
} Ieee1609Dot2Content_PR;

/* Forward declarations */
struct SignedData;

/* Ieee1609Dot2Content */
typedef struct Ieee1609Dot2Content {
	Ieee1609Dot2Content_PR present;
	union Ieee1609Dot2Content_u {
		Opaque_t	 unsecuredData;
		struct SignedData	*signedData;
		EncryptedData_t	 encryptedData;
		Opaque_t	 signedCertificateRequest;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		Opaque_t	 signedX509CertificateRequest;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ieee1609Dot2Content_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ieee1609Dot2Content;
extern asn_CHOICE_specifics_t asn_SPC_Ieee1609Dot2Content_specs_1;
extern asn_TYPE_member_t asn_MBR_Ieee1609Dot2Content_1[5];
extern asn_per_constraints_t asn_PER_type_Ieee1609Dot2Content_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignedData.h"

#endif	/* _Ieee1609Dot2Content_H_ */
#include <asn_internal.h>
