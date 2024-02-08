/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TypesAuthorizationValidation"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/EtsiTs102941TypesAuthorizationValidation.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <OCTET_STRING.h>
#include "AuthorizationValidationResponseCode.h"
#include <constr_SEQUENCE.h>
#ifndef	_AuthorizationValidationResponse_H_
#define	_AuthorizationValidationResponse_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CertificateSubjectAttributes;

/* AuthorizationValidationResponse */
typedef struct AuthorizationValidationResponse {
	OCTET_STRING_t	 requestHash;
	AuthorizationValidationResponseCode_t	 responseCode;
	struct CertificateSubjectAttributes	*confirmedSubjectAttributes;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuthorizationValidationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthorizationValidationResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_AuthorizationValidationResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_AuthorizationValidationResponse_1[3];
extern asn_per_constraints_t asn_PER_type_AuthorizationValidationResponse_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CertificateSubjectAttributes.h"

#endif	/* _AuthorizationValidationResponse_H_ */
#include <asn_internal.h>
