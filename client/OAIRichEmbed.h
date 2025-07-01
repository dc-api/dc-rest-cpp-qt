/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIRichEmbed.h
 *
 * 
 */

#ifndef OAIRichEmbed_H
#define OAIRichEmbed_H

#include <QJsonObject>

#include "OAIRichEmbedAuthor.h"
#include "OAIRichEmbedField.h"
#include "OAIRichEmbedFooter.h"
#include "OAIRichEmbedImage.h"
#include "OAIRichEmbedProvider.h"
#include "OAIRichEmbedThumbnail.h"
#include "OAIRichEmbedVideo.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIRichEmbedAuthor;
class OAIRichEmbedImage;
class OAIRichEmbedThumbnail;
class OAIRichEmbedFooter;
class OAIRichEmbedField;
class OAIRichEmbedProvider;
class OAIRichEmbedVideo;

class OAIRichEmbed : public OAIObject {
public:
    OAIRichEmbed();
    OAIRichEmbed(QString json);
    ~OAIRichEmbed() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    qint32 getColor() const;
    void setColor(const qint32 &color);
    bool is_color_Set() const;
    bool is_color_Valid() const;

    QDateTime getTimestamp() const;
    void setTimestamp(const QDateTime &timestamp);
    bool is_timestamp_Set() const;
    bool is_timestamp_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAIRichEmbedAuthor getAuthor() const;
    void setAuthor(const OAIRichEmbedAuthor &author);
    bool is_author_Set() const;
    bool is_author_Valid() const;

    OAIRichEmbedImage getImage() const;
    void setImage(const OAIRichEmbedImage &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    OAIRichEmbedThumbnail getThumbnail() const;
    void setThumbnail(const OAIRichEmbedThumbnail &thumbnail);
    bool is_thumbnail_Set() const;
    bool is_thumbnail_Valid() const;

    OAIRichEmbedFooter getFooter() const;
    void setFooter(const OAIRichEmbedFooter &footer);
    bool is_footer_Set() const;
    bool is_footer_Valid() const;

    QList<OAIRichEmbedField> getFields() const;
    void setFields(const QList<OAIRichEmbedField> &fields);
    bool is_fields_Set() const;
    bool is_fields_Valid() const;

    OAIRichEmbedProvider getProvider() const;
    void setProvider(const OAIRichEmbedProvider &provider);
    bool is_provider_Set() const;
    bool is_provider_Valid() const;

    OAIRichEmbedVideo getVideo() const;
    void setVideo(const OAIRichEmbedVideo &video);
    bool is_video_Set() const;
    bool is_video_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    qint32 m_color;
    bool m_color_isSet;
    bool m_color_isValid;

    QDateTime m_timestamp;
    bool m_timestamp_isSet;
    bool m_timestamp_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAIRichEmbedAuthor m_author;
    bool m_author_isSet;
    bool m_author_isValid;

    OAIRichEmbedImage m_image;
    bool m_image_isSet;
    bool m_image_isValid;

    OAIRichEmbedThumbnail m_thumbnail;
    bool m_thumbnail_isSet;
    bool m_thumbnail_isValid;

    OAIRichEmbedFooter m_footer;
    bool m_footer_isSet;
    bool m_footer_isValid;

    QList<OAIRichEmbedField> m_fields;
    bool m_fields_isSet;
    bool m_fields_isValid;

    OAIRichEmbedProvider m_provider;
    bool m_provider_isSet;
    bool m_provider_isValid;

    OAIRichEmbedVideo m_video;
    bool m_video_isSet;
    bool m_video_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIRichEmbed)

#endif // OAIRichEmbed_H
