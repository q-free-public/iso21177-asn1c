/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC-noCircular"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/DSRC_noCircular.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "NodeOffsetPointXY.h"
#include <constr_SEQUENCE.h>
#ifndef	_NodeXY_H_
#define	_NodeXY_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeAttributeSetXY;

/* NodeXY */
typedef struct NodeXY {
	NodeOffsetPointXY_t	 delta;
	struct NodeAttributeSetXY	*attributes;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeXY_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeXY;
extern asn_SEQUENCE_specifics_t asn_SPC_NodeXY_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeXY_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeAttributeSetXY.h"

#endif	/* _NodeXY_H_ */
#include <asn_internal.h>
