/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "PolygonalLine.h"
#include "IviLaneWidth.h"
#include <constr_SEQUENCE.h>
#ifndef	_Segment_H_
#define	_Segment_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Segment */
typedef struct Segment {
	PolygonalLine_t	 line;
	IviLaneWidth_t	*laneWidth;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Segment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Segment;
extern asn_SEQUENCE_specifics_t asn_SPC_Segment_specs_1;
extern asn_TYPE_member_t asn_MBR_Segment_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Segment_H_ */
#include <asn_internal.h>
