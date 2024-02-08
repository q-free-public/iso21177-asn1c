/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/AddGrpC.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "RejectedReason.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_RejectedReason_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_RejectedReason_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_RejectedReason_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	20,	"exceptionalCondition" },
	{ 2,	22,	"maxWaitingTimeExceeded" },
	{ 3,	18,	"ptPriorityDisabled" },
	{ 4,	23,	"higherPTPriorityGranted" },
	{ 5,	22,	"vehicleTrackingUnknown" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RejectedReason_enum2value_1[] = {
	1,	/* exceptionalCondition(1) */
	4,	/* higherPTPriorityGranted(4) */
	2,	/* maxWaitingTimeExceeded(2) */
	3,	/* ptPriorityDisabled(3) */
	0,	/* unknown(0) */
	5	/* vehicleTrackingUnknown(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RejectedReason_specs_1 = {
	asn_MAP_RejectedReason_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RejectedReason_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RejectedReason_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RejectedReason = {
	"RejectedReason",
	"RejectedReason",
	&asn_OP_NativeEnumerated,
	asn_DEF_RejectedReason_tags_1,
	sizeof(asn_DEF_RejectedReason_tags_1)
		/sizeof(asn_DEF_RejectedReason_tags_1[0]), /* 1 */
	asn_DEF_RejectedReason_tags_1,	/* Same as above */
	sizeof(asn_DEF_RejectedReason_tags_1)
		/sizeof(asn_DEF_RejectedReason_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_RejectedReason_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RejectedReason_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RejectedReason_specs_1	/* Additional specs */
};

