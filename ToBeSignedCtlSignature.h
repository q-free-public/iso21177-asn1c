/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1CertManagement"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1CertManagement.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "ElectorGroupId.h"
#include "Ieee1609dot2dot1MsctlType.h"
#include "CtlSequenceNumber.h"
#include "HashedId48.h"
#include <constr_SEQUENCE.h>
#ifndef	_ToBeSignedCtlSignature_H_
#define	_ToBeSignedCtlSignature_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ToBeSignedCtlSignature */
typedef struct ToBeSignedCtlSignature {
	ElectorGroupId_t	 electorGroupId;
	Ieee1609dot2dot1MsctlType_t	 ctlType;
	CtlSequenceNumber_t	 sequenceNumber;
	HashedId48_t	 tbsCtlHash;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ToBeSignedCtlSignature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ToBeSignedCtlSignature;
extern asn_SEQUENCE_specifics_t asn_SPC_ToBeSignedCtlSignature_specs_1;
extern asn_TYPE_member_t asn_MBR_ToBeSignedCtlSignature_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ToBeSignedCtlSignature_H_ */
#include <asn_internal.h>
