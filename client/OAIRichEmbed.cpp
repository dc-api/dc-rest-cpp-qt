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

#include "OAIRichEmbed.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIRichEmbed::OAIRichEmbed(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRichEmbed::OAIRichEmbed() {
    this->initializeModel();
}

OAIRichEmbed::~OAIRichEmbed() {}

void OAIRichEmbed::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_color_isSet = false;
    m_color_isValid = false;

    m_timestamp_isSet = false;
    m_timestamp_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_author_isSet = false;
    m_author_isValid = false;

    m_image_isSet = false;
    m_image_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;

    m_footer_isSet = false;
    m_footer_isValid = false;

    m_fields_isSet = false;
    m_fields_isValid = false;

    m_provider_isSet = false;
    m_provider_isValid = false;

    m_video_isSet = false;
    m_video_isValid = false;
}

void OAIRichEmbed::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRichEmbed::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_color_isValid = ::dc_rest::fromJsonValue(m_color, json[QString("color")]);
    m_color_isSet = !json[QString("color")].isNull() && m_color_isValid;

    m_timestamp_isValid = ::dc_rest::fromJsonValue(m_timestamp, json[QString("timestamp")]);
    m_timestamp_isSet = !json[QString("timestamp")].isNull() && m_timestamp_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_author_isValid = ::dc_rest::fromJsonValue(m_author, json[QString("author")]);
    m_author_isSet = !json[QString("author")].isNull() && m_author_isValid;

    m_image_isValid = ::dc_rest::fromJsonValue(m_image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_thumbnail_isValid = ::dc_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;

    m_footer_isValid = ::dc_rest::fromJsonValue(m_footer, json[QString("footer")]);
    m_footer_isSet = !json[QString("footer")].isNull() && m_footer_isValid;

    m_fields_isValid = ::dc_rest::fromJsonValue(m_fields, json[QString("fields")]);
    m_fields_isSet = !json[QString("fields")].isNull() && m_fields_isValid;

    m_provider_isValid = ::dc_rest::fromJsonValue(m_provider, json[QString("provider")]);
    m_provider_isSet = !json[QString("provider")].isNull() && m_provider_isValid;

    m_video_isValid = ::dc_rest::fromJsonValue(m_video, json[QString("video")]);
    m_video_isSet = !json[QString("video")].isNull() && m_video_isValid;
}

QString OAIRichEmbed::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRichEmbed::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_color_isSet) {
        obj.insert(QString("color"), ::dc_rest::toJsonValue(m_color));
    }
    if (m_timestamp_isSet) {
        obj.insert(QString("timestamp"), ::dc_rest::toJsonValue(m_timestamp));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_author.isSet()) {
        obj.insert(QString("author"), ::dc_rest::toJsonValue(m_author));
    }
    if (m_image.isSet()) {
        obj.insert(QString("image"), ::dc_rest::toJsonValue(m_image));
    }
    if (m_thumbnail.isSet()) {
        obj.insert(QString("thumbnail"), ::dc_rest::toJsonValue(m_thumbnail));
    }
    if (m_footer.isSet()) {
        obj.insert(QString("footer"), ::dc_rest::toJsonValue(m_footer));
    }
    if (m_fields.size() > 0) {
        obj.insert(QString("fields"), ::dc_rest::toJsonValue(m_fields));
    }
    if (m_provider.isSet()) {
        obj.insert(QString("provider"), ::dc_rest::toJsonValue(m_provider));
    }
    if (m_video.isSet()) {
        obj.insert(QString("video"), ::dc_rest::toJsonValue(m_video));
    }
    return obj;
}

QString OAIRichEmbed::getType() const {
    return m_type;
}
void OAIRichEmbed::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIRichEmbed::is_type_Set() const{
    return m_type_isSet;
}

bool OAIRichEmbed::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIRichEmbed::getUrl() const {
    return m_url;
}
void OAIRichEmbed::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIRichEmbed::is_url_Set() const{
    return m_url_isSet;
}

bool OAIRichEmbed::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIRichEmbed::getTitle() const {
    return m_title;
}
void OAIRichEmbed::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIRichEmbed::is_title_Set() const{
    return m_title_isSet;
}

bool OAIRichEmbed::is_title_Valid() const{
    return m_title_isValid;
}

qint32 OAIRichEmbed::getColor() const {
    return m_color;
}
void OAIRichEmbed::setColor(const qint32 &color) {
    m_color = color;
    m_color_isSet = true;
}

bool OAIRichEmbed::is_color_Set() const{
    return m_color_isSet;
}

bool OAIRichEmbed::is_color_Valid() const{
    return m_color_isValid;
}

QDateTime OAIRichEmbed::getTimestamp() const {
    return m_timestamp;
}
void OAIRichEmbed::setTimestamp(const QDateTime &timestamp) {
    m_timestamp = timestamp;
    m_timestamp_isSet = true;
}

bool OAIRichEmbed::is_timestamp_Set() const{
    return m_timestamp_isSet;
}

bool OAIRichEmbed::is_timestamp_Valid() const{
    return m_timestamp_isValid;
}

QString OAIRichEmbed::getDescription() const {
    return m_description;
}
void OAIRichEmbed::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIRichEmbed::is_description_Set() const{
    return m_description_isSet;
}

bool OAIRichEmbed::is_description_Valid() const{
    return m_description_isValid;
}

OAIRichEmbedAuthor OAIRichEmbed::getAuthor() const {
    return m_author;
}
void OAIRichEmbed::setAuthor(const OAIRichEmbedAuthor &author) {
    m_author = author;
    m_author_isSet = true;
}

bool OAIRichEmbed::is_author_Set() const{
    return m_author_isSet;
}

bool OAIRichEmbed::is_author_Valid() const{
    return m_author_isValid;
}

OAIRichEmbedImage OAIRichEmbed::getImage() const {
    return m_image;
}
void OAIRichEmbed::setImage(const OAIRichEmbedImage &image) {
    m_image = image;
    m_image_isSet = true;
}

bool OAIRichEmbed::is_image_Set() const{
    return m_image_isSet;
}

bool OAIRichEmbed::is_image_Valid() const{
    return m_image_isValid;
}

OAIRichEmbedThumbnail OAIRichEmbed::getThumbnail() const {
    return m_thumbnail;
}
void OAIRichEmbed::setThumbnail(const OAIRichEmbedThumbnail &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAIRichEmbed::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAIRichEmbed::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

OAIRichEmbedFooter OAIRichEmbed::getFooter() const {
    return m_footer;
}
void OAIRichEmbed::setFooter(const OAIRichEmbedFooter &footer) {
    m_footer = footer;
    m_footer_isSet = true;
}

bool OAIRichEmbed::is_footer_Set() const{
    return m_footer_isSet;
}

bool OAIRichEmbed::is_footer_Valid() const{
    return m_footer_isValid;
}

QList<OAIRichEmbedField> OAIRichEmbed::getFields() const {
    return m_fields;
}
void OAIRichEmbed::setFields(const QList<OAIRichEmbedField> &fields) {
    m_fields = fields;
    m_fields_isSet = true;
}

bool OAIRichEmbed::is_fields_Set() const{
    return m_fields_isSet;
}

bool OAIRichEmbed::is_fields_Valid() const{
    return m_fields_isValid;
}

OAIRichEmbedProvider OAIRichEmbed::getProvider() const {
    return m_provider;
}
void OAIRichEmbed::setProvider(const OAIRichEmbedProvider &provider) {
    m_provider = provider;
    m_provider_isSet = true;
}

bool OAIRichEmbed::is_provider_Set() const{
    return m_provider_isSet;
}

bool OAIRichEmbed::is_provider_Valid() const{
    return m_provider_isValid;
}

OAIRichEmbedVideo OAIRichEmbed::getVideo() const {
    return m_video;
}
void OAIRichEmbed::setVideo(const OAIRichEmbedVideo &video) {
    m_video = video;
    m_video_isSet = true;
}

bool OAIRichEmbed::is_video_Set() const{
    return m_video_isSet;
}

bool OAIRichEmbed::is_video_Valid() const{
    return m_video_isValid;
}

bool OAIRichEmbed::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_image.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_footer.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fields.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_provider.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRichEmbed::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
