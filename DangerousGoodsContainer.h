/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "../../asn1/../ttcn/AtsCAM/lib/asn1/CAM_PDU_Descriptions.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "DangerousGoodsBasic.h"
#include <constr_SEQUENCE.h>
#ifndef	_DangerousGoodsContainer_H_
#define	_DangerousGoodsContainer_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DangerousGoodsContainer */
typedef struct DangerousGoodsContainer {
	DangerousGoodsBasic_t	 dangerousGoodsBasic;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DangerousGoodsContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DangerousGoodsContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_DangerousGoodsContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_DangerousGoodsContainer_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DangerousGoodsContainer_H_ */
#include <asn_internal.h>
