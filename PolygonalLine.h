/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "DeltaPositions.h"
#include "DeltaReferencePositions.h"
#include "AbsolutePositions.h"
#include "AbsolutePositionsWAltitude.h"
#include <constr_CHOICE.h>
#ifndef	_PolygonalLine_H_
#define	_PolygonalLine_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PolygonalLine_PR {
	PolygonalLine_PR_NOTHING,	/* No components present */
	PolygonalLine_PR_deltaPositions,
	PolygonalLine_PR_deltaPositionsWithAltitude,
	PolygonalLine_PR_absolutePositions,
	PolygonalLine_PR_absolutePositionsWithAltitude
	/* Extensions may appear below */
	
} PolygonalLine_PR;

/* PolygonalLine */
typedef struct PolygonalLine {
	PolygonalLine_PR present;
	union PolygonalLine_u {
		DeltaPositions_t	 deltaPositions;
		DeltaReferencePositions_t	 deltaPositionsWithAltitude;
		AbsolutePositions_t	 absolutePositions;
		AbsolutePositionsWAltitude_t	 absolutePositionsWithAltitude;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PolygonalLine_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PolygonalLine;
extern asn_CHOICE_specifics_t asn_SPC_PolygonalLine_specs_1;
extern asn_TYPE_member_t asn_MBR_PolygonalLine_1[4];
extern asn_per_constraints_t asn_PER_type_PolygonalLine_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PolygonalLine_H_ */
#include <asn_internal.h>
