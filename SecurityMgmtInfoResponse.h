/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Iso21177AccessControl"
 * 	found in "../../asn1/../ttcn/Ats21177/21177/EN_ISO_21177_access_control.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <OCTET_STRING.h>
#include "SecurityMgmtInfoResponseId.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "SecurityMgmtInfoErrorResponse.h"
#include "EtsiCrlResponse.h"
#include "EtsiCtlResponse.h"
#include "IeeeCrlResponse.h"
#include "CertChainResponse.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#ifndef	_SecurityMgmtInfoResponse_H_
#define	_SecurityMgmtInfoResponse_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityMgmtInfoResponse__value_PR {
	SecurityMgmtInfoResponse__value_PR_NOTHING,	/* No components present */
	SecurityMgmtInfoResponse__value_PR_SecurityMgmtInfoErrorResponse,
	SecurityMgmtInfoResponse__value_PR_EtsiCrlResponse,
	SecurityMgmtInfoResponse__value_PR_EtsiCtlResponse,
	SecurityMgmtInfoResponse__value_PR_IeeeCrlResponse,
	SecurityMgmtInfoResponse__value_PR_CertChainResponse
} SecurityMgmtInfoResponse__value_PR;

/* SecurityMgmtInfoResponse */
typedef struct SecurityMgmtInfoResponse {
	OCTET_STRING_t	 id;
	SecurityMgmtInfoResponseId_t	 messageId;
	struct SecurityMgmtInfoResponse__value {
		SecurityMgmtInfoResponse__value_PR present;
		union SecurityMgmtInfoResponse__value_u {
			SecurityMgmtInfoErrorResponse_t	 SecurityMgmtInfoErrorResponse;
			EtsiCrlResponse_t	 EtsiCrlResponse;
			EtsiCtlResponse_t	 EtsiCtlResponse;
			IeeeCrlResponse_t	 IeeeCrlResponse;
			CertChainResponse_t	 CertChainResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityMgmtInfoResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityMgmtInfoResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityMgmtInfoResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityMgmtInfoResponse_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityMgmtInfoResponse_H_ */
#include <asn_internal.h>