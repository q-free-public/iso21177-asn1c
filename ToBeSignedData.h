/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "HeaderInfo.h"
#include <constr_SEQUENCE.h>
#ifndef	_ToBeSignedData_H_
#define	_ToBeSignedData_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignedDataPayload;

/* ToBeSignedData */
typedef struct ToBeSignedData {
	struct SignedDataPayload	*payload;
	HeaderInfo_t	 headerInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ToBeSignedData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ToBeSignedData;
extern asn_SEQUENCE_specifics_t asn_SPC_ToBeSignedData_specs_1;
extern asn_TYPE_member_t asn_MBR_ToBeSignedData_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignedDataPayload.h"

#endif	/* _ToBeSignedData_H_ */
#include <asn_internal.h>