/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Iso21177AccessControl"
 * 	found in "../../asn1/../ttcn/Ats21177/21177/EN_ISO_21177_access_control.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "EccP256CurvePoint.h"
#include <OCTET_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#ifndef	_SpakeResponse_H_
#define	_SpakeResponse_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SpakeResponse */
typedef struct SpakeResponse {
	EccP256CurvePoint_t	 s;
	OCTET_STRING_t	 hashOfKPrimeRespId;
	BOOLEAN_t	 responseRequest;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpakeResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpakeResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_SpakeResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_SpakeResponse_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SpakeResponse_H_ */
#include <asn_internal.h>