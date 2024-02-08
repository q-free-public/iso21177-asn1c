/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "Uint8.h"
#include <constr_SEQUENCE.h>
#ifndef	_ElectorSsp_H_
#define	_ElectorSsp_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ElectorSsp */
typedef struct ElectorSsp {
	Uint8_t	 version;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ElectorSsp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ElectorSsp;
extern asn_SEQUENCE_specifics_t asn_SPC_ElectorSsp_specs_1;
extern asn_TYPE_member_t asn_MBR_ElectorSsp_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ElectorSsp_H_ */
#include <asn_internal.h>
