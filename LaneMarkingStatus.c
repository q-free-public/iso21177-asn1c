/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "LaneMarkingStatus.h"

/*
 * This type is implemented using BOOLEAN,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_LaneMarkingStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (1 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LaneMarkingStatus = {
	"LaneMarkingStatus",
	"LaneMarkingStatus",
	&asn_OP_BOOLEAN,
	asn_DEF_LaneMarkingStatus_tags_1,
	sizeof(asn_DEF_LaneMarkingStatus_tags_1)
		/sizeof(asn_DEF_LaneMarkingStatus_tags_1[0]), /* 1 */
	asn_DEF_LaneMarkingStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaneMarkingStatus_tags_1)
		/sizeof(asn_DEF_LaneMarkingStatus_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		BOOLEAN_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

